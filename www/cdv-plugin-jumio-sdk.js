function JumioMobile() {}

//Native calls

//Netverify
JumioMobile.prototype.netverifySdkVersion = function(jumioCredentials, completionCallback) {
  var failureCallback = function() {
    console.log("Could not retrieve Jumio Netverify library version");
  };

  cordova.exec(completionCallback, failureCallback, "JumioMobile", "netverifySdkVersion", [jumioCredentials]);
};

JumioMobile.prototype.isSupportedPlatformForNetverify = function(successCallback, failureCallback) {
    cordova.exec(successCallback, failureCallback, "JumioMobile", "isSupportedPlatformForNetverify", []);
};

JumioMobile.prototype.presentNetverifyController = function(jumioCredentials, netverifyConfiguration, completionCallback, failureCallback) {
  cordova.exec(completionCallback, failureCallback, "JumioMobile", "presentNetverifyController", [jumioCredentials, netverifyConfiguration]);
}

JumioMobile.prototype.configureNetverifyControllerAppearence = function(appearenceConfig, completionCallback){
  var failureCallback = function() {
    console.log("Could not configure Netverify appearence");   
  };
  cordova.exec(completionCallback, failureCallback, "JumioMobile", "configureNetverifyControllerAppearence", [appearenceConfig]);
}

//Netswipe
JumioMobile.prototype.netswipeSdkVersion = function(jumioCredentials, completionCallback) {
  var failureCallback = function() {
    console.log("Could not retrieve Jumio Netswipe library version");
  };

  cordova.exec(completionCallback, failureCallback, "JumioMobile", "netswipeSdkVersion", [jumioCredentials]);
};

JumioMobile.prototype.isSupportedPlatformForNetswipe = function(successCallback, failureCallback) {
  cordova.exec(successCallback, failureCallback, "JumioMobile", "isSupportedPlatformForNetswipe", []);
};

JumioMobile.prototype.isRootedDevice = function(successCallback, failureCallback) {
  cordova.exec(successCallback, failureCallback, "JumioMobile", "isRootedDevice", []);
};

JumioMobile.prototype.presentNetswipeController = function(jumioCredentials, merchangeReportingCriteria, netswipeConfiguration, completionCallback, failureCallback) {
  cordova.exec(completionCallback, failureCallback, "JumioMobile", "presentNetswipeController", [jumioCredentials, merchangeReportingCriteria, netswipeConfiguration]);
}   

JumioMobile.prototype.configureNetswipeControllerAppearence = function(appearenceConfig, completionCallback){
  var failureCallback = function() {
    console.log("Could not configure Netswipe appearence");   
  };
  cordova.exec(completionCallback, failureCallback, "JumioMobile", "configureNetswipeControllerAppearence", [appearenceConfig]);
}

//Helpers
JumioMobile.prototype.JumioCredentials = function (apiToken, apiSecret){
  this.apiToken = String(apiToken);
  this.apiSecret = String(apiSecret);
};

JumioMobile.prototype.JumioNetverifyConfiguration = function(options){
  defaults = {
    //You can specify issuing country (ISO 3166-1 alpha 3 country code) and ID type or let the user choose them during the verification process.
    preselectedCountry: null,

    // Possible values are:
    // - UNKNOWN
    // - PASSPORT
    // - DRIVER_LICENSE
    // - ID_CARD
    // - VISA
    preselectedDocumentType: null,
    
    //When a selected country and ID type support more document variants (paper and plastic), you can specify the document variant in advance or let the user choose during the verification process.
    // Possible values are:
    // - UNKNOWN
    // - PAPER
    // - PLASTIC
    preselectedDocumentVariant: null,
    
    //The merchant scan reference allows you to identify the scan (max. 100 characters). Note: Must not contain sensitive data like PII (Personally Identifiable Information) or account login.
    merchantScanReference: null,
    
    //Use the following property to identify the scan in your reports (max. 100 characters).
    merchantReportingCriteria: null,
    
    //You can also set a customer identifier (max. 100 characters). Note: The customer ID should not contain sensitive data like PII (Personally Identifiable Information) or account login.
    customerId: null,
    
    //Callback URL (max. 255 characters) for the confirmation after the verification is completed. This setting overrides your Jumio merchant settings.
    callbackUrl: null,
    
    //Enable ID verification to receive a verification status and verified data positions (see Callback chapter). Note: Not possible for accounts configured as Fastfill only.
    requireVerification: true,

    //You can enable face match during the ID verification for a specific transaction. This setting overrides your default Jumio merchant settings.
    requireFaceMatch: true,

    //Use the following properties to pass first and last name to Fastfill for name match.
    firstName: null,
    lastName: null,
    
    //Disable flag in scanView
    showFlagOnInfoBar: false,
    
    //Set the default camera position
    // Possible values are:
    // - FRONT
    // - BACK
    cameraPosition: null,
    
    //Enable data extraction from visa documents
    //Note: Only possible for accounts configured as Fastfill.
    enableVisa: true

  };

  if (!options || typeof options !== "object") {
    return defaults;
  }

  for (var i in options) {
    if (defaults.hasOwnProperty(i)) {
      defaults[i] = options[i];
    }
  }

  return defaults;
}

JumioMobile.prototype.JumioNetswipeConfiguration = function(options){
  defaults = {
    cardHolderNameRequired: true,
    sortCodeAndAccountNumberRequired: true,
    expiryRequired: true,
    cvvRequired: true,
    firstName: null,
    lastName: null,
    manualEntryEnabled: false,
    expiryEditable: false,
    cardHolderNameEditable: false,
    cardNumberMaskingEnabled: true,

    vibrationEffectEnabled: true,
    //iOS only. Name of the soundfile
    soundEffect: null,
    
    //Set the default camera position
    // Possible values are:
    // - FRONT
    // - BACK
    cameraPosition: "BACK",
    enableFlashOnScanStart: false,

    //List of supported credit cards
    // Possible values are:
    // - VISA
    // - MASTER_CARD
    // - AMERICAN_EXPRESS
    // - DINERS_CLUB
    // - DISCOVER
    // - CHINA_UNIONPAY
    // - JCB
    // - PRIVATE_LABEL
    supportedCreditCardTypes: ["VISA", "MASTER_CARD"]
  };

  if (!options || typeof options !== "object") {
    return defaults;
  }

  for (var i in options) {
    if (defaults.hasOwnProperty(i)) {
      defaults[i] = options[i];
    }
  }

  return defaults;
}

module.exports = new JumioMobile();
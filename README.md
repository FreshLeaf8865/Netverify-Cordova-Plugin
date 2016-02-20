#Cordova plugin for JumioSDK

##Usage 

###Netverify
```javascript
JumioMobile.configureNetverifyControllerAppearence({navigationBarBarTintColor: "#ff0000"});
var credentials = new JumioMobile.JumioCredentials("API_KEY", "APP_SECRET");
var configuration = new JumioMobile.JumioNetverifyConfiguration({
    customerId: "791f-1123-0ac5-ee",
    requireFaceMatch: true,
    showFlagOnInfoBar: true,
    cameraPosition: "BACK"
});
JumioMobile.presentNetverifyController(credentials, configuration, function(result){
    alert("Successful Scan" + JSON.stringify(result, null, 2));
}, function(error){
    alert("Error: \n" + JSON.stringify(error, null, 2));
})
```

###Netswipe
```javascript
JumioMobile.configureNetswipeControllerAppearence({navigationBarBarTintColor: "#ff0000"});
var merchantReportingCriteria = "akjd1231sdfasdfa";
var credentials = new JumioMobile.JumioCredentials("API_KEY", "APP_SECRET");
var configuration = new JumioMobile.JumioNetswipeConfiguration({
    merchantReportingCriteria: merchantReportingCriteria,
    cardHolderNameEditable: true,
    supportedCreditCardTypes: ["MASTER_CARD", "VISA"],

});
JumioMobile.presentNetswipeController(credentials, merchantReportingCriteria, configuration, function(result){
    alert("Successful Scan " + JSON.stringify(result, null, 2));
}, function(error){
    alert("Error: \n" + JSON.stringify(error, null, 2));
})
```
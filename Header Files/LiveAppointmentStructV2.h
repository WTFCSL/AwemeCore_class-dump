//
//     Generated by private class-dump
//

@class NSString, LynxRawDataStructV2;

@interface LiveAppointmentStructV2 : GPBMessage

@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) BOOL hasWebURL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) LynxRawDataStructV2 *lynxRawData;
@property (nonatomic) BOOL hasLynxRawData;
@property (copy, nonatomic) NSString *templateURL;
@property (nonatomic) BOOL hasTemplateURL;
@property (nonatomic) int showButtonSeconds;
@property (nonatomic) BOOL hasShowButtonSeconds;
@property (nonatomic) int position;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) BOOL hasButtonStyle;

+ (id)descriptor;

@end

//
//     Generated by private class-dump
//

@class NSString, CGPBusinessLocationClient_GnssSvInfo, NSMutableArray;

@interface CGPBusinessLocationClient : GPBMessage

@property (copy, nonatomic) NSString *provider;
@property (nonatomic) long long time;
@property (nonatomic) float elapsedRealtimeNanos;
@property (nonatomic) float latitude;
@property (nonatomic) float altitude;
@property (nonatomic) float longitude;
@property (nonatomic) float speed;
@property (nonatomic) float bearing;
@property (nonatomic) float accuracyMeters;
@property (nonatomic) float verticalAccuracyMeters;
@property (nonatomic) float speedAccuracyMetersPerSecond;
@property (nonatomic) float bearingAccuracyDegrees;
@property (retain, nonatomic) CGPBusinessLocationClient_GnssSvInfo *gnssSvInfo;
@property (nonatomic) BOOL hasGnssSvInfo;
@property (retain, nonatomic) NSMutableArray *nmeaArray;
@property (readonly, nonatomic) unsigned long long nmeaArray_Count;

+ (id)descriptor;

@end

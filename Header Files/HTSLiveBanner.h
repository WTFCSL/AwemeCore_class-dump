//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveBanner : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) long long actionType;
@property (nonatomic) long long bannerType;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long frameType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long status;
@property (nonatomic) long long uid;
@property (nonatomic) long long roomid;
@property (nonatomic) long long appointmentStartTimestamp;
@property (nonatomic) long long appointmentEndTimestamp;
@property (nonatomic) long long appointmentId;

+ (id)descriptor;

- (id)mapToBannerModel;

@end

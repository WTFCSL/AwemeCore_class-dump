//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEAdTrackContext : NSObject <IESECAdTrackContext, NSCopying> {
    unsigned char _useByteAdSDK;
    BOOL _nonStandardAd;
    BOOL _manuallyTrack3rdPartyURL;
    NSString *_event;
    NSString *_label;
    NSNumber *_duration;
    NSNumber *_videoLength;
    NSNumber *_percent;
    NSNumber *_volumn;
    NSNumber *_loopTimes;
    NSString *_logExtra;
    NSNumber *_creativeID;
    NSString *_groupID;
    NSString *_refer;
    NSDictionary *_extra;
    NSDictionary *_adExtraData;
    NSString *_trackLabel;
    NSNumber *_adID;
    NSString *_comment_extra;
    NSString *_union_user_id;
    NSString *_eventType;
    NSString *_scene;
    NSNumber *_isAdEvent;
    NSString *_awesomeSplashAdId;
    NSString *_currentType;
    long long _movedFloorCount;
    long long _relativePosition;
    NSString *_role;
    AWEAwemeModel *_awemeModel;
}

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *videoLength;
@property (retain, nonatomic) NSNumber *percent;
@property (retain, nonatomic) NSNumber *volumn;
@property (retain, nonatomic) NSNumber *loopTimes;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSNumber *adID;
@property (copy, nonatomic) NSString *comment_extra;
@property (copy, nonatomic) NSString *union_user_id;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned char useByteAdSDK;
@property (nonatomic) BOOL nonStandardAd;
@property (retain, nonatomic) NSNumber *isAdEvent;
@property (copy, nonatomic) NSString *awesomeSplashAdId;
@property (copy, nonatomic) NSString *currentType;
@property (nonatomic) long long movedFloorCount;
@property (nonatomic) long long relativePosition;
@property (copy, nonatomic) NSString *role;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL manuallyTrack3rdPartyURL;

- (id)awemeModel;
- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setAdExtraData:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (id)loopTimes;
- (id)adExtraData;
- (void)setRefer:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (void)setTrackLabel:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (void)setManuallyTrack3rdPartyURL:(BOOL)arg0;
- (id)volumn;
- (id)refer;
- (void)setIsAdEvent:(id)arg0;
- (id)isAdEvent;
- (void)setCurrentType:(id)arg0;
- (void)setVolumn:(id)arg0;
- (id)videoLength;
- (void)setVideoLength:(id)arg0;
- (void)setLoopTimes:(id)arg0;
- (void)setUnion_user_id:(id)arg0;
- (void)setNonStandardAd:(BOOL)arg0;
- (void)setComment_extra:(id)arg0;
- (void)setMovedFloorCount:(long long)arg0;
- (long long)movedFloorCount;
- (BOOL)nonStandardAd;
- (id)comment_extra;
- (id)union_user_id;
- (unsigned char)useByteAdSDK;
- (void)setUseByteAdSDK:(unsigned char)arg0;
- (id)awesomeSplashAdId;
- (void)setAwesomeSplashAdId:(id)arg0;
- (BOOL)manuallyTrack3rdPartyURL;
- (void)setGroupID:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)groupID;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)eventType;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setLabel:(id)arg0;
- (void)setRole:(id)arg0;
- (id)extra;
- (id)role;
- (id)duration;
- (id)label;
- (long long)relativePosition;
- (void)setEventType:(id)arg0;
- (id)scene;
- (void)setDuration:(id)arg0;
- (id)trackLabel;
- (void)setRelativePosition:(long long)arg0;
- (id)percent;
- (id)currentType;
- (id)creativeID;
- (void)setPercent:(id)arg0;

@end

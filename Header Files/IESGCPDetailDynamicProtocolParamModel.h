//
//     Generated by private class-dump
//

@class NSString, IESGCPDetailDynamicProtocolComponentCriteria;

@interface IESGCPDetailDynamicProtocolParamModel : NSObject {
    NSString *_gameID;
    NSString *_scene;
    NSString *_promoterID;
    NSString *_videoID;
    NSString *_roomID;
    NSString *_promoterOpenID;
    NSString *_forwarderOpenID;
    NSString *_enterFrom;
    NSString *_launchFrom;
    NSString *_enterDirectly;
    NSString *_location;
    NSString *_bizMode;
    NSString *_bizId;
    long long _bizType;
    NSString *_extra;
    long long _pageID;
    NSString *_promoteInstanceID;
    IESGCPDetailDynamicProtocolComponentCriteria *_componentCriteria;
}

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *promoterID;
@property (retain, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *promoterOpenID;
@property (copy, nonatomic) NSString *forwarderOpenID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *launchFrom;
@property (copy, nonatomic) NSString *enterDirectly;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (retain, nonatomic) IESGCPDetailDynamicProtocolComponentCriteria *componentCriteria;

- (void)setLaunchFrom:(id)arg0;
- (id)launchFrom;
- (void)setEnterFrom:(id)arg0;
- (void)setExtra:(id)arg0;
- (id)enterFrom;
- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (void)setGameID:(id)arg0;
- (void)setPromoterID:(id)arg0;
- (id)promoteInstanceID;
- (void)setPromoteInstanceID:(id)arg0;
- (id)bizMode;
- (void)setBizMode:(id)arg0;
- (id)promoterID;
- (id)promoterOpenID;
- (id)forwarderOpenID;
- (id)componentCriteria;
- (void)setPromoterOpenID:(id)arg0;
- (void)setForwarderOpenID:(id)arg0;
- (id)enterDirectly;
- (void)setEnterDirectly:(id)arg0;
- (void)setComponentCriteria:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setPageID:(long long)arg0;
- (long long)pageID;
- (id)location;
- (id)extra;
- (void)setLocation:(id)arg0;
- (id)scene;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (id)gameID;
- (id)requestParams;
- (id)bizId;
- (void)setBizId:(id)arg0;

@end
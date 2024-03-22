//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECRelationLiveGiftModel;

@interface IESECRelationLiveInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_roomId;
    NSString *_anchorId;
    NSString *_liveTitle;
    IESECURLModel *_liveCover;
    NSString *_streamData;
    NSString *_roomUrl;
    NSString *_popupUrl;
    IESECRelationLiveGiftModel *_liveGift;
    long long _liveType;
}

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *liveTitle;
@property (retain, nonatomic) IESECURLModel *liveCover;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *roomUrl;
@property (copy, nonatomic) NSString *popupUrl;
@property (retain, nonatomic) IESECRelationLiveGiftModel *liveGift;
@property (nonatomic) long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (void)setLiveType:(long long)arg0;
- (long long)liveType;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setStreamData:(id)arg0;
- (id)liveTitle;
- (void)setLiveTitle:(id)arg0;
- (id)roomUrl;
- (void)setRoomUrl:(id)arg0;
- (id)popupUrl;
- (id)liveCover;
- (id)liveGift;
- (void)setLiveCover:(id)arg0;
- (void)setPopupUrl:(id)arg0;
- (void)setLiveGift:(id)arg0;
- (void).cxx_destruct;
- (id)streamData;

@end

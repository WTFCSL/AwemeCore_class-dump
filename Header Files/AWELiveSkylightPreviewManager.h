//
//     Generated by private class-dump
//

@class NSString;
@protocol AWELiveUserAvatarPreviewProtocol;

@interface AWELiveSkylightPreviewManager : NSObject <AWELiveSkylightPreviewProtocol> {
    NSString *_uid;
    unsigned long long _style;
    id<AWELiveUserAvatarPreviewProtocol> _livePreview;
}

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> livePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlay;
- (void)resetPlayerViewState;
- (id)livePreview;
- (void)setLivePreview:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)playerView;
- (void)setStyle:(unsigned long long)arg0;

@end
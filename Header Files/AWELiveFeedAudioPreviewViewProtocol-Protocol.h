//
//     Generated by private class-dump
//

@class IESLiveBigPartyPreStreamController;
@protocol IESLivePlayerProtocol;

@protocol AWELiveFeedAudioPreviewViewProtocol <NSObject>

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) BOOL ignorePlayerHidden;
@property (retain, nonatomic) IESLiveBigPartyPreStreamController *bigPartyController;

- (void)configWithListModel:(id)arg0;
- (void)handleSEIData:(id)arg0;
- (id)getAudioView;
- (BOOL)ignorePlayerHidden;
- (void)setIgnorePlayerHidden:(BOOL)arg0;
- (id)bigPartyController;
- (void)setBigPartyController:(id)arg0;
- (void)setPlayer:(id)arg0;
- (void)reset;
- (id)player;

@end

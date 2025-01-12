//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCMusicPlayerService : NSObject <ACCMusicPlayerServiceProtocol> {
    long long _playerType;
    AWEVideoPublishViewModel *_publishModel;
    id<IESServiceProvider> _serviceProvider;
}

@property (nonatomic) long long playerType;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setPlayerType:(long long)arg0;
- (id)initWithPublishModel:(id)arg0 serviceProvider:(id)arg1;
- (void)setNeedsUpdatePlayerTypeWithBiz:(id)arg0;
- (void)updatePlayerType;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (long long)playerType;

@end

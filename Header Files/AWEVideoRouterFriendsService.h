//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEStudioFriendsServiceDependencies;

@interface AWEVideoRouterFriendsService : NSObject <AWEStudioFriendsService> {
    id<AWEStudioFriendsServiceDependencies> _dependencies;
}

@property (retain, nonatomic) id<AWEStudioFriendsServiceDependencies> dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startCloseFriendsPublishTask:(id)arg0;
- (id)startVideoWithInfoSticker:(id)arg0 info:(id)arg1;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setDependencies:(id)arg0;

@end

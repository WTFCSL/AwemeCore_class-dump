//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEStudioReeditServiceDependencies;

@interface AWEVideoRouterReeditService : NSObject <AWEStudioReeditService> {
    id<AWEStudioReeditServiceDependencies> _dependencies;
}

@property (retain, nonatomic) id<AWEStudioReeditServiceDependencies> dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startReeditWithConfig:(id)arg0;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setDependencies:(id)arg0;

@end
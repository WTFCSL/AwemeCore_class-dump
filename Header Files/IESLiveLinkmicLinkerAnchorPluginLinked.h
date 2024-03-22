//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveLinkmicLinkerPluginProvider;

@interface IESLiveLinkmicLinkerAnchorPluginLinked : NSObject <IESLiveLinkmicLinkerPlugin> {
    id<IESLiveLinkmicLinkerPluginProvider> _provider;
}

@property (retain, nonatomic) id<IESLiveLinkmicLinkerPluginProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)linkerDidStart;
- (void)linkerDidStop;
- (void)linkerInteractListUpdated;
- (void)linkerUserPositionUpdated;
- (void)linkerUserBindToView;
- (id)sortedInteractSession;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;

@end

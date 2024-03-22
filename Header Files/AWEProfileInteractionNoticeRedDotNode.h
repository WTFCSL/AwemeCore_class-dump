//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileInteractionNoticeRedDotNode : NSObject <AWEUserMessage, AWEAppAwemeSettingMessage, AWEProfileRedDotNodeProtocol> {
    id<AWEProfileRedDotNodeProtocol> _parentNode;
    id<AWEProfileRedDotNodeModelProtocol> _currentModel;
}

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setupObserver;
- (void)showRedDotIfNeed;
- (void)bindParentNode:(id)arg0;
- (void)bindAdapter:(id)arg0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (id)init;
- (void).cxx_destruct;
- (id)parentNode;
- (void)setParentNode:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
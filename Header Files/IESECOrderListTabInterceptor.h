//
//     Generated by private class-dump
//

@class NSString;
@protocol YataRenderObjectInterface;

@interface IESECOrderListTabInterceptor : NSObject <YataInterceptorInterface> {
    id<YataRenderObjectInterface> _tabRenderNode;
}

@property (readonly, nonatomic) id<YataRenderObjectInterface> tabRenderNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithRenderObject:(id)arg0;
- (id)tabRenderNode;
- (void).cxx_destruct;

@end

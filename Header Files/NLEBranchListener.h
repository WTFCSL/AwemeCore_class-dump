//
//     Generated by private class-dump
//

@class NSString;
@protocol NLEBranchListenerDelegate;

@interface NLEBranchListener : NSObject <NLEBranchListenerDelegate> {
    struct shared_ptr<cut::model::_NLEBranchListener> { struct _NLEBranchListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
    id<NLEBranchListenerDelegate> _delegate;
}

@property (weak, nonatomic) id<NLEBranchListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)branchDidChange;
- (struct shared_ptr<cut::model::_NLEBranchListener> { struct _NLEBranchListener *x0; struct __shared_weak_count *x1; })cppListener;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id).cxx_construct;

@end
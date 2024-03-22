//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEBaseListViewControllerDelegate;

@interface AWEBaseListAdapterDelegate : NSObject <IGListAdapterDelegate> {
    id<AWEBaseListViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEBaseListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listAdapter:(id)arg0 willDisplayObject:(id)arg1 atIndex:(long long)arg2;
- (void)listAdapter:(id)arg0 didEndDisplayingObject:(id)arg1 atIndex:(long long)arg2;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end

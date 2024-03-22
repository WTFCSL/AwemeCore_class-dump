//
//     Generated by private class-dump
//

@class NSString;
@protocol BDVViewEventProtocol;

@interface BDVViewManager : BDVBaseManager <BDVScrollViewEventProtocol> {
    BOOL _bdv_viewDidVisible;
    BOOL _hasBindToScrollView;
    id<BDVViewEventProtocol> _delegate;
}

@property (nonatomic) BOOL hasBindToScrollView;
@property (weak, nonatomic) id<BDVViewEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkViewVisible;
- (void)bdv_scrollViewDidScroll:(id)arg0;
- (BOOL)hasBindToScrollView;
- (void)setHasBindToScrollView:(BOOL)arg0;
- (void)checkViewVisibleWithScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
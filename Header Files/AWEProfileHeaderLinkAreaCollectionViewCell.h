//
//     Generated by private class-dump
//

@class NSString, AWECommonLinkAreaView, AWEProfileLinkAreaView, AWEProfileHeaderContext;
@protocol AWEProfileHeaderLinkAreaCollectionViewCellDelegate;

@interface AWEProfileHeaderLinkAreaCollectionViewCell : UICollectionViewCell <AWEProfileLinkAreaViewDelegate, AWEProfileHeaderCellProtocol> {
    id<AWEProfileHeaderLinkAreaCollectionViewCellDelegate> _delegate;
    AWECommonLinkAreaView *_commonLinkAreaView;
    AWEProfileLinkAreaView *_profileLinkAreaView;
    AWEProfileHeaderContext *_context;
}

@property (retain, nonatomic) AWECommonLinkAreaView *commonLinkAreaView;
@property (retain, nonatomic) AWEProfileLinkAreaView *profileLinkAreaView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) id<AWEProfileHeaderLinkAreaCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderContext:(id)arg0;
- (id)commonLinkAreaView;
- (id)profileLinkAreaView;
- (void)profileLinkAreaViewTapWithlinkType:(long long)arg0 linkIsReplaced:(BOOL)arg1;
- (void)refreshLinkAreaHeight:(double)arg0;
- (void)setCommonLinkAreaView:(id)arg0;
- (void)setProfileLinkAreaView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;

@end
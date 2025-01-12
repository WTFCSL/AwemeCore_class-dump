//
//     Generated by private class-dump
//

@class UIStackView, NSArray, NSString, BDPMorePanelSingleLinePage;

@interface BDPMorePanelDoubleLinePage : UIView <BDPMorePanelPage> {
    BDPMorePanelSingleLinePage *_topPage;
    BDPMorePanelSingleLinePage *_bottomPage;
    UIStackView *_stackView;
    NSArray *_items;
}

@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)capacity;

- (BOOL)abTestOnForShareItemMenu;
- (id)init;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setupUI;
- (void)updateItems:(id)arg0;

@end

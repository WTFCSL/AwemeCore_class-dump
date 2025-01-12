//
//     Generated by private class-dump
//

@class AWEPOIDetailMoreOptionView, UIView;

@interface AWEPOIDetailMoreOptionViewController : UIViewController <AWEPOIDetailMoreOptionViewDelegate> {
    id /* block */ _onClose;
    AWEPOIDetailMoreOptionView *_moreOptionView;
    UIView *_tapToCloseView;
}

@property (retain, nonatomic) AWEPOIDetailMoreOptionView *moreOptionView;
@property (retain, nonatomic) UIView *tapToCloseView;
@property (copy, nonatomic) id /* block */ onClose;

+ (BOOL)hasOptionForPOI:(id)arg0;

- (id)poiDetail;
- (void)p_setupViews;
- (id)constData;
- (void)tapItem:(id)arg0;
- (void)tapToClose;
- (id)tapToCloseView;
- (id)moreOptionView;
- (void)setTapToCloseView:(id)arg0;
- (void)setMoreOptionView:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)viewDidLoad;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end

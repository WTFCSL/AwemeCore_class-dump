//
//     Generated by private class-dump
//

@class UIButton;

@interface AWERelatedVideoPlayTVScreenElement : AWERelatedVideoPlayBaseElement {
    BOOL _hidden;
    UIButton *_tvButton;
}

@property (retain, nonatomic) UIButton *tvButton;
@property (nonatomic) BOOL hidden;

- (void)setHide:(BOOL)arg0;
- (void)initializeElement;
- (void)bindEvent;
- (id)tvButton;
- (void)setTvButton:(id)arg0;
- (BOOL)shouldAppear;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setHidden:(BOOL)arg0;
- (BOOL)hidden;
- (void)viewDidLoad;

@end
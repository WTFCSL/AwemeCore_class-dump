//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveFansGroupListViewController : UIViewController {
    NSString *_listViewURL;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    struct CGSize { double width; double height; } _viewSize;
}

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) NSString *listViewURL;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;

- (id)hybridContainer;
- (void)setHybridContainer:(id)arg0;
- (void)loadHybridContainer;
- (id)initWithViewSize:(struct CGSize { double x0; double x1; })arg0 listViewURL:(id)arg1;
- (void)setListViewURL:(id)arg0;
- (id)listViewURL;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)viewDidLoad;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;

@end

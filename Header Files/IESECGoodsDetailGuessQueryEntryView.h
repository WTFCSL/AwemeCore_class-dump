//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESECGoodsDetailParameters, UILabel, IESECButton;

@interface IESECGoodsDetailGuessQueryEntryView : UIView <IESECGoodsDetailParametersProtocol> {
    UIImageView *_searchImageView;
    UILabel *_guessQueryLabel;
    IESECButton *_queryWordButton;
    IESECGoodsDetailParameters *_parameters;
}

@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UILabel *guessQueryLabel;
@property (retain, nonatomic) IESECButton *queryWordButton;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchImageView;
- (void)setSearchImageView:(id)arg0;
- (void)initializeWithParameters:(id)arg0;
- (id)guessQueryLabel;
- (id)queryWordButton;
- (void)setGuessQueryLabel:(id)arg0;
- (void)setQueryWordButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setParameters:(id)arg0;
- (id)parameters;
- (void)handleTap;

@end

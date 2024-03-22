//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMPanelButtonViewModel : AWEIMPanelViewModel {
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    id /* block */ _primaryAction;
    id /* block */ _secondaryAction;
}

@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) id /* block */ primaryAction;
@property (copy, nonatomic) id /* block */ secondaryAction;

+ (id)defaultViewModel;

- (void)setSecondaryAction:(id /* block */)arg0;
- (id)init;
- (id)secondaryTitle;
- (void).cxx_destruct;
- (void)setSecondaryTitle:(id)arg0;
- (void)setPrimaryAction:(id /* block */)arg0;
- (id /* block */)primaryAction;
- (void)setPrimaryTitle:(id)arg0;
- (id)primaryTitle;
- (id /* block */)secondaryAction;

@end
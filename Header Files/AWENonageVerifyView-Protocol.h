//
//     Generated by private class-dump
//

@class AWENonageVerifyViewModel;
@protocol AWENonageVerifyViewDelegate;

@protocol AWENonageVerifyView <NSObject>

@property (weak, nonatomic) id<AWENonageVerifyViewDelegate> delegate;
@property (retain, nonatomic) AWENonageVerifyViewModel *viewModel;

- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;

@end
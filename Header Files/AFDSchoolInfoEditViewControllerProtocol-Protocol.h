//
//     Generated by private class-dump
//

@protocol AWEProfileEditViewModelProtocol;

@protocol AFDSchoolInfoEditViewControllerProtocol <NSObject>

@property (retain, nonatomic) id<AWEProfileEditViewModelProtocol> viewModel;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (nonatomic) BOOL hasChangedSchoolInfo;

- (void)setSubmitBlock:(id /* block */)arg0;
- (id /* block */)submitBlock;
- (BOOL)hasChangedSchoolInfo;
- (void)setHasChangedSchoolInfo:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end

//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWEIMFansContentContainer : AWEIMFansBaseContainer <UIGestureRecognizerDelegate> {
    UILabel *_assemblyContentLabel;
}

@property (retain, nonatomic) UILabel *assemblyContentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)arg0;
- (id)assemblyContentLabel;
- (void)setAssemblyContentLabel:(id)arg0;
- (void)updateContentText;
- (void).cxx_destruct;
- (void)setupViews;

@end

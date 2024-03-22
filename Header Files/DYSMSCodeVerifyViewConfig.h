//
//     Generated by private class-dump
//

@class NSString;

@interface DYSMSCodeVerifyViewConfig : NSObject {
    BOOL _hiddenBarLine;
    BOOL _closeAutoPopViewController;
    NSString *_titleContent;
    NSString *_subTitleContent;
    NSString *_submitBtnContent;
}

@property (nonatomic) BOOL hiddenBarLine;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (copy, nonatomic) NSString *submitBtnContent;
@property (nonatomic) BOOL closeAutoPopViewController;

- (id)subTitleContent;
- (void)setSubTitleContent:(id)arg0;
- (void)setCloseAutoPopViewController:(BOOL)arg0;
- (void)setSubmitBtnContent:(id)arg0;
- (void)setHiddenBarLine:(BOOL)arg0;
- (BOOL)hiddenBarLine;
- (id)submitBtnContent;
- (BOOL)closeAutoPopViewController;
- (id)init;
- (void).cxx_destruct;
- (void)setTitleContent:(id)arg0;
- (id)titleContent;

@end
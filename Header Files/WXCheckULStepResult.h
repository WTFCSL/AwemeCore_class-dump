//
//     Generated by private class-dump
//

@class NSString;

@interface WXCheckULStepResult : NSObject {
    BOOL _success;
    NSString *_errorInfo;
    NSString *_suggestion;
}

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *errorInfo;
@property (retain, nonatomic) NSString *suggestion;

- (id)errorInfo;
- (void)setErrorInfo:(id)arg0;
- (id)initWithCheckResult:(BOOL)arg0 errorInfo:(id)arg1 suggestion:(id)arg2;
- (id)suggestion;
- (void)setSuggestion:(id)arg0;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (id)description;

@end
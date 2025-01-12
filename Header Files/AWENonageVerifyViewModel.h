//
//     Generated by private class-dump
//

@class NSString;

@interface AWENonageVerifyViewModel : NSObject {
    NSString *_title;
    NSString *_content;
    NSString *_nonageTitle;
    NSString *_adultTitle;
    NSString *_verifyFailedToast;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *nonageTitle;
@property (copy, nonatomic) NSString *adultTitle;
@property (copy, nonatomic) NSString *verifyFailedToast;

- (id)verifyFailedToast;
- (id)nonageTitle;
- (id)adultTitle;
- (void)setNonageTitle:(id)arg0;
- (void)setAdultTitle:(id)arg0;
- (void)setVerifyFailedToast:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end

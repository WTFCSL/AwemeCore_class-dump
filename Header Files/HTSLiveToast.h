//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveToast : IESLivePBBaseMessage

@property (nonatomic) BOOL didShowToast;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toastId;

+ (id)descriptor;

- (BOOL)didShowToast;
- (void)setDidShowToast:(BOOL)arg0;

@end

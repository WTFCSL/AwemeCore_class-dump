//
//     Generated by private class-dump
//

@class NSString;

@interface AFDSchoolVerifyResult : NSObject {
    NSString *_info;
    long long _verifyResult;
    NSString *_schoolName;
    NSString *_schoolID;
}

@property (copy, nonatomic) NSString *info;
@property (nonatomic) long long verifyResult;
@property (retain, nonatomic) NSString *schoolName;
@property (retain, nonatomic) NSString *schoolID;

- (void)setSchoolName:(id)arg0;
- (id)schoolID;
- (void)setSchoolID:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (long long)verifyResult;
- (void)setVerifyResult:(long long)arg0;
- (id)schoolName;

@end

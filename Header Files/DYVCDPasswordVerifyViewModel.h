//
//     Generated by private class-dump
//

@class NSString;

@interface DYVCDPasswordVerifyViewModel : NSObject {
    NSString *_UID;
}

@property (copy, nonatomic) NSString *UID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;

+ (id)instanceWithUID:(id)arg0;

- (id)verifyWithPhone:(id)arg0 password:(id)arg1;
- (void).cxx_destruct;
- (id)UID;
- (id)title;
- (id)subTitle;
- (void)setUID:(id)arg0;

@end
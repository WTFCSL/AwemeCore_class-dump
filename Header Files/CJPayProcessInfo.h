//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayProcessInfo : JSONModel {
    NSString *_createTime;
    NSString *_processId;
    NSString *_processInfo;
}

@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *processInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)processInfo;
- (void).cxx_destruct;
- (void)setCreateTime:(id)arg0;
- (void)setProcessId:(id)arg0;
- (void)setProcessInfo:(id)arg0;
- (BOOL)isValid;
- (id)dictionaryValue;
- (id)createTime;
- (id)processId;

@end

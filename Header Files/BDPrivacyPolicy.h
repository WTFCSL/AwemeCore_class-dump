//
//     Generated by private class-dump
//

@class NSString;

@interface BDPrivacyPolicy : NSObject {
    NSString *_uuid;
    NSString *_dataType;
    NSString *_statement;
    NSString *_version;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *statement;
@property (copy, nonatomic) NSString *version;

- (id)initWithUUID:(id)arg0 dataType:(id)arg1 statement:(id)arg2 version:(id)arg3;
- (id)statement;
- (void)setStatement:(id)arg0;
- (void)setDataType:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (BOOL)isValid;
- (id)initWithDict:(id)arg0;
- (id)dataType;
- (id)version;
- (id)uuid;

@end
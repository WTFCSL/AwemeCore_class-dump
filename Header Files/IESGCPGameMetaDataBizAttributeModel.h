//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPGameMetaDataBizAttributeModel : NSObject {
    unsigned long long _bizType;
    NSString *_bizId;
    NSString *_bizMode;
    NSString *_bizExtra;
}

@property (readonly, copy, nonatomic) NSString *bizTypeString;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizExtra;

- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg0;
- (id)bizExtra;
- (void)setBizExtra:(id)arg0;
- (id)bizMode;
- (id)bizTypeString;
- (void)setBizMode:(id)arg0;
- (void).cxx_destruct;
- (id)bizId;
- (void)setBizId:(id)arg0;

@end
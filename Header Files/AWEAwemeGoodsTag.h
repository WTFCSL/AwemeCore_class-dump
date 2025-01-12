//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface AWEAwemeGoodsTag : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    IESECURLModel *_icon;
    long long _type;
}

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) IESECURLModel *icon;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)icon;
- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;

@end

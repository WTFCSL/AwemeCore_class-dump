//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinAuthorImpressionWordModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_amount;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *amount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)amount;
- (void)setAmount:(id)arg0;

@end

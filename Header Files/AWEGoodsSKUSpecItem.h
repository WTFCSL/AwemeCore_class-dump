//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGoodsSKUSpecItem : MTLModel <MTLJSONSerializing> {
    NSString *_identifier;
    NSString *_name;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)identifier;
- (void)setName:(id)arg0;
- (id)name;
- (void)setIdentifier:(id)arg0;

@end

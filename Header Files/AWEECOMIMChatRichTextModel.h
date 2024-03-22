//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECOMIMChatRichTextModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSArray *_placeholderModelArr;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *placeholderModelArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderModelArrJSONTransformer;
+ (id)buttonArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlaceholderModelArr:(id)arg0;
- (id)placeholderModelArr;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;

@end
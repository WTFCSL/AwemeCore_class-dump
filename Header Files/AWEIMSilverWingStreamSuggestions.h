//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMSilverWingStreamSuggestions : MTLModel <MTLJSONSerializing> {
    unsigned long long _idx;
    NSString *_text;
}

@property (nonatomic) unsigned long long idx;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void)setIdx:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (unsigned long long)idx;

@end

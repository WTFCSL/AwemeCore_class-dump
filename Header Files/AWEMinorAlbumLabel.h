//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMinorAlbumLabel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    NSString *_text;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)text;

@end
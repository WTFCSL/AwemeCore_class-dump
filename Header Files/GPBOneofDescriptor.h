//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface GPBOneofDescriptor : NSObject {
    const char *name_;
    NSArray *fields_;
    SEL caseSel_;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *fields;

- (id)fields;
- (id)initWithName:(const char *)arg0 fields:(id)arg1;
- (id)fieldWithName:(id)arg0;
- (void)dealloc;
- (id)name;
- (id)fieldWithNumber:(unsigned int)arg0;

@end

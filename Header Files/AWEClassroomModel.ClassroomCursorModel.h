//
//     Generated by private class-dump
//

@class NSString;

@interface AWEClassroomModel.ClassroomCursorModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ hasMore;
}

@property (nonatomic, copy) NSString *cursor;
@property (nonatomic) void /* unknown type, empty encoding */ hasMore;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cursor;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)initWithCoder:(id)arg0;
- (void)setCursor:(id)arg0;

@end
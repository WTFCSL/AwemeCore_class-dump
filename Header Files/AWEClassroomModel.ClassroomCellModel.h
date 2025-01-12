//
//     Generated by private class-dump
//

@interface AWEClassroomModel.ClassroomCellModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ cellType;
    void /* unknown type, empty encoding */ cellId;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ lesson;
    void /* unknown type, empty encoding */ lessonUnit;
    void /* unknown type, empty encoding */ block;
}

@property (nonatomic) void /* unknown type, empty encoding */ cellType;
@property (nonatomic) void /* unknown type, empty encoding */ cellId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ item;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lesson;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lessonUnit;
@property (nonatomic, retain) void /* unknown type, empty encoding */ block;

+ (id)itemJSONTransformer;
+ (id)lessonJSONTransformer;
+ (id)lessonUnitJSONTransformer;
+ (id)blockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCellId:(long long)arg0;
- (id)lesson;
- (void)setLesson:(id)arg0;
- (id)lessonUnit;
- (void)setLessonUnit:(id)arg0;
- (id)item;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setBlock:(id)arg0;
- (void)setCellType:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)cellId;
- (long long)cellType;
- (id)block;
- (void)setItem:(id)arg0;

@end

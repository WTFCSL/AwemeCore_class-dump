//
//     Generated by private class-dump
//

@interface AWEClassroomModel.ClassroomLessonNoteForecastModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ offset;
    void /* unknown type, empty encoding */ numNotes;
    void /* unknown type, empty encoding */ numUsers;
    void /* unknown type, empty encoding */ segmentOffset;
}

@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) void /* unknown type, empty encoding */ numNotes;
@property (nonatomic) void /* unknown type, empty encoding */ numUsers;
@property (nonatomic, retain) void /* unknown type, empty encoding */ segmentOffset;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)numNotes;
- (void)setNumNotes:(long long)arg0;
- (id)segmentOffset;
- (void)setSegmentOffset:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (id)initWithCoder:(id)arg0;
- (void)setNumUsers:(long long)arg0;
- (long long)numUsers;

@end

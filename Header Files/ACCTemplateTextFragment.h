//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface ACCTemplateTextFragment : NSObject <NSCopying> {
    BOOL _isTextTemplate;
    NSString *_resourceID;
    NSString *_content;
    UIImage *_albumImage;
    long long _indexOfTextClip;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL isTextTemplate;
@property (nonatomic) long long indexOfTextClip;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *albumImage;

+ (id)convertFromNLETemplateTextFragment:(id)arg0;
+ (id)convertFromLVTextFragment:(id)arg0;

- (BOOL)isTextTemplate;
- (void)setIsTextTemplate:(BOOL)arg0;
- (id)albumImage;
- (void)setAlbumImage:(id)arg0;
- (long long)indexOfTextClip;
- (void)setIndexOfTextClip:(long long)arg0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)content;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)setContent:(id)arg0;

@end
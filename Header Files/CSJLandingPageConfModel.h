//
//     Generated by private class-dump
//

@interface CSJLandingPageConfModel : NSObject {
    long long _swipeBackType;
    long long _filter_track;
}

@property (nonatomic) long long swipeBackType;
@property (nonatomic) long long filter_track;

- (BOOL)needIgnoreTrack;
- (void)setSwipeBackType:(long long)arg0;
- (void)setFilter_track:(long long)arg0;
- (long long)filter_track;
- (long long)swipeBackType;
- (id)initWithDictionary:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end

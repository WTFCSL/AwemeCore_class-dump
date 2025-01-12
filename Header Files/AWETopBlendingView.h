//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@interface AWETopBlendingView : UIView {
    NSMutableArray *_items;
    NSArray *_segments;
}

@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSMutableArray *items;

- (void)updateSegments;
- (void)prepareSegments;
- (void)drawSegments;
- (long long)compareFloat:(double)arg0 and:(double)arg1;
- (void)addItem:(id)arg0 toZOrderedArray:(id)arg1;
- (void)removeItem:(id)arg0;
- (void)addItem:(id)arg0;
- (void)setItems:(id)arg0;
- (id)segments;
- (void).cxx_destruct;
- (id)items;
- (void)setSegments:(id)arg0;
- (void)layoutSubviews;

@end

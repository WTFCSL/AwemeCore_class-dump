//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface RTVAlertViewModel : NSObject {
    BOOL _messageShouldAlignLeft;
    NSString *_headerImageURLString;
    NSString *_title;
    NSString *_message;
    NSArray *_highlights;
    NSDictionary *_messageAttributes;
}

@property (copy, nonatomic) NSString *headerImageURLString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *highlights;
@property (copy, nonatomic) NSDictionary *messageAttributes;
@property (nonatomic) BOOL messageShouldAlignLeft;

- (BOOL)messageShouldAlignLeft;
- (void)setMessageShouldAlignLeft:(BOOL)arg0;
- (void)setHeaderImageURLString:(id)arg0;
- (id)headerImageURLString;
- (void)setMessageAttributes:(id)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)message;
- (id)highlights;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setHighlights:(id)arg0;
- (id)messageAttributes;

@end

//
//     Generated by private class-dump
//

@class NSString;

@interface RTVUISectionSupplementaryModel : NSObject {
    NSString *_elementKind;
    NSString *_identifier;
    id _model;
    id _context;
}

@property (readonly, copy, nonatomic) NSString *elementKind;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) id context;

- (id)initWithSupplementaryIdentifier:(id)arg0 elmentKind:(id)arg1 model:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)model;
- (id)elementKind;
- (id)identifier;
- (id)context;

@end

//
//     Generated by private class-dump
//

@class NSString, Element;

@interface Attr : Node {
    BOOL specified;
    NSString *name;
    NSString *value;
    Element *ownerElement;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL specified;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) Element *ownerElement;

- (void)setSpecified:(BOOL)arg0;
- (void)setOwnerElement:(id)arg0;
- (id)initWithNamespace:(id)arg0 qualifiedName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (id)value;
- (id)initWithName:(id)arg0 value:(id)arg1;
- (void)setName:(id)arg0;
- (void)setValue:(id)arg0;
- (id)name;
- (BOOL)specified;
- (id)ownerElement;

@end

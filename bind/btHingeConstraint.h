/** Very simple binding for hinge constraints.
 */
class btHingeConstraint : public btTypedConstraint {
public:
  btHingeConstraint( btRigidBody& rbA,
      const btTransform& rbAFrame,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      const btVector3& pivotInA,
      btVector3& axisInA,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      btRigidBody& rbB,
      const btVector3& pivotInA,
      const btVector3& pivotInB,
      btVector3& axisInA,
      btVector3& axisInB,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      btRigidBody& rbB,
      const btTransform& rbAFrame,
      const btTransform& rbBFrame,
      bool useReferenceFrameA = false);

  void enableAngularMotor(bool enableMotor,btScalar targetVelocity,btScalar maxMotorImpulse);
};
